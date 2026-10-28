#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C60898
// Address: 0x1c60898 - 0x1c609a8
void sub_01C60898_0x1c60898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60898_0x1c60898");
#endif

    switch (ctx->pc) {
        case 0x1c608c0u: goto label_1c608c0;
        case 0x1c60900u: goto label_1c60900;
        case 0x1c60954u: goto label_1c60954;
        default: break;
    }

    ctx->pc = 0x1c60898u;

    // 0x1c60898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c60898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6089c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c608a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c608a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c608a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c608a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c608a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c608a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c608ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c608acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c608b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c608b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c608b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c608b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c608b8: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C608B8u;
    SET_GPR_U32(ctx, 31, 0x1C608C0u);
    ctx->pc = 0x1C608BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C608B8u;
    // 0x1c608bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C608B8u, 0x1C608C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C608C0u;
label_1c608c0:
    // 0x1c608c0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c608c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c608c4: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1c608c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c608c8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c608c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c608cc: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1c608ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1c608d0: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1c608d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1c608d4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1c608d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c608d8: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1c608d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c608dc: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c608dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c608e0: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1c608e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c608e4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c608e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c608e8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1c608e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1c608ec: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1c608ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1c608f0: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1c608f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1c608f4: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1c608f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1c608f8: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C608F8u;
    SET_GPR_U32(ctx, 31, 0x1C60900u);
    ctx->pc = 0x1C608FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C608F8u;
    // 0x1c608fc: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C608F8u, 0x1C60900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60900u;
label_1c60900:
    // 0x1c60900: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1c60900u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c60904: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c60904u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c60908: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1c60908u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6090c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6090cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60910: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c60910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c60914: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1c60914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60918: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1c60918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1c6091c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1c6091cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1c60920: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1c60920u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c60924: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1c60924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60928: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1c60928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1c6092c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1c6092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1c60930: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1c60930u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1c60934: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1c60934u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c60938: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1c60938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1c6093c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1c6093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60940: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c60940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c60944: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1c60944u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c60948: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1c60948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1c6094c: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1c6094cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1c60950: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1c60950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1c60954:
    // 0x1c60954: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c60954u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c60958: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1c60958u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1c6095c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c6095cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c60960: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1c60960u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c60964: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c60964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c60968: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1c60968u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c6096c: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1c6096cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1c60970: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1c60970u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c60974: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1c60974u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1c60978: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1c60978u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1c6097c: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1c6097cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1c60980: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1c60980u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1c60984: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C60984u;
    {
        const bool branch_taken_0x1c60984 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60984u;
        // 0x1c60988: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60984) {
            ctx->pc = 0x1C60954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60954;
        }
    }
    ctx->pc = 0x1C6098Cu;
    // 0x1c6098c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6098cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c60994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60998: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c60998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6099c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C609A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6099Cu;
        // 0x1c609a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6099Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C609A4u;
    // 0x1c609a4: 0x0  nop
    ctx->pc = 0x1c609a4u;
    // NOP
    ctx->pc = 0x1c609a8u;
}
