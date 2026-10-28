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

// Function: sub_01DBC598
// Address: 0x1dbc598 - 0x1dbc6a8
void sub_01DBC598_0x1dbc598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBC598_0x1dbc598");
#endif

    switch (ctx->pc) {
        case 0x1dbc5c0u: goto label_1dbc5c0;
        case 0x1dbc600u: goto label_1dbc600;
        case 0x1dbc654u: goto label_1dbc654;
        default: break;
    }

    ctx->pc = 0x1dbc598u;

    // 0x1dbc598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbc598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbc59c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbc59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbc5a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbc5a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbc5a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbc5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc5ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbc5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dbc5b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dbc5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc5b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbc5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbc5b8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC5B8u;
    SET_GPR_U32(ctx, 31, 0x1DBC5C0u);
    ctx->pc = 0x1DBC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC5B8u;
    // 0x1dbc5bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC5B8u, 0x1DBC5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC5C0u;
label_1dbc5c0:
    // 0x1dbc5c0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1dbc5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1dbc5c4: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1dbc5c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dbc5c8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1dbc5c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1dbc5cc: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1dbc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1dbc5d0: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1dbc5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1dbc5d4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1dbc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1dbc5d8: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1dbc5d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1dbc5dc: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1dbc5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1dbc5e0: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1dbc5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dbc5e4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1dbc5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1dbc5e8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1dbc5e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1dbc5ec: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1dbc5ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1dbc5f0: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1dbc5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1dbc5f4: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1dbc5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1dbc5f8: 0xc76ee46  jal         func_1DBB918
    ctx->pc = 0x1DBC5F8u;
    SET_GPR_U32(ctx, 31, 0x1DBC600u);
    ctx->pc = 0x1DBC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC5F8u;
    // 0x1dbc5fc: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB918u, 0x1DBC5F8u, 0x1DBC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC600u;
label_1dbc600:
    // 0x1dbc600: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1dbc600u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dbc604: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1dbc604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1dbc608: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1dbc608u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbc60c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbc60cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc610: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1dbc610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dbc614: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1dbc614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc618: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1dbc618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1dbc61c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1dbc61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1dbc620: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1dbc620u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1dbc624: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1dbc624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc628: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1dbc628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1dbc62c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1dbc62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1dbc630: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1dbc630u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1dbc634: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1dbc634u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1dbc638: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1dbc638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1dbc63c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1dbc63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc640: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1dbc640u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1dbc644: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1dbc644u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1dbc648: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1dbc648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1dbc64c: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1dbc64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1dbc650: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1dbc650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1dbc654:
    // 0x1dbc654: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1dbc654u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1dbc658: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1dbc658u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1dbc65c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1dbc65cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1dbc660: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1dbc660u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1dbc664: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1dbc664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1dbc668: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1dbc668u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dbc66c: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1dbc66cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1dbc670: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1dbc670u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1dbc674: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1dbc674u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1dbc678: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1dbc678u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1dbc67c: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1dbc67cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1dbc680: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1dbc680u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1dbc684: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBC684u;
    {
        const bool branch_taken_0x1dbc684 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC684u;
        // 0x1dbc688: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc684) {
            ctx->pc = 0x1DBC654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc654;
        }
    }
    ctx->pc = 0x1DBC68Cu;
    // 0x1dbc68c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbc694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc698: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbc698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbc69c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC69Cu;
        // 0x1dbc6a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC6A4u;
    // 0x1dbc6a4: 0x0  nop
    ctx->pc = 0x1dbc6a4u;
    // NOP
    ctx->pc = 0x1dbc6a8u;
}
