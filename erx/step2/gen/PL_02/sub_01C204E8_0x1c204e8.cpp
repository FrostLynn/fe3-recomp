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

// Function: sub_01C204E8
// Address: 0x1c204e8 - 0x1c205f8
void sub_01C204E8_0x1c204e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C204E8_0x1c204e8");
#endif

    switch (ctx->pc) {
        case 0x1c20510u: goto label_1c20510;
        case 0x1c20550u: goto label_1c20550;
        case 0x1c205a4u: goto label_1c205a4;
        default: break;
    }

    ctx->pc = 0x1c204e8u;

    // 0x1c204e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c204e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c204ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c204ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c204f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c204f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c204f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c204f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c204f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c204f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c204fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c204fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c20500: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c20500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20504: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c20504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c20508: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20508u;
    SET_GPR_U32(ctx, 31, 0x1C20510u);
    ctx->pc = 0x1C2050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20508u;
    // 0x1c2050c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20508u, 0x1C20510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20510u;
label_1c20510:
    // 0x1c20510: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c20510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c20514: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1c20514u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c20518: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c20518u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c2051c: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1c2051cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1c20520: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1c20520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1c20524: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1c20524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c20528: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1c20528u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c2052c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c2052cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c20530: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1c20530u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c20534: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c20534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c20538: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1c20538u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1c2053c: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1c2053cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1c20540: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1c20540u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1c20544: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1c20544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1c20548: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20548u;
    SET_GPR_U32(ctx, 31, 0x1C20550u);
    ctx->pc = 0x1C2054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20548u;
    // 0x1c2054c: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20548u, 0x1C20550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20550u;
label_1c20550:
    // 0x1c20550: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1c20550u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c20554: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c20554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c20558: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1c20558u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c2055c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c2055cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20560: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c20560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c20564: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1c20564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20568: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1c20568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1c2056c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1c2056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1c20570: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1c20570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c20574: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1c20574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20578: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1c20578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1c2057c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1c2057cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1c20580: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1c20580u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1c20584: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1c20584u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c20588: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1c20588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1c2058c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1c2058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20590: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c20590u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c20594: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1c20594u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c20598: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1c20598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1c2059c: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1c2059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1c205a0: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1c205a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1c205a4:
    // 0x1c205a4: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c205a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c205a8: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1c205a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1c205ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c205acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c205b0: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1c205b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c205b4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c205b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c205b8: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1c205b8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c205bc: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1c205bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1c205c0: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1c205c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c205c4: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1c205c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1c205c8: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1c205c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1c205cc: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1c205ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1c205d0: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1c205d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1c205d4: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C205D4u;
    {
        const bool branch_taken_0x1c205d4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C205D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C205D4u;
        // 0x1c205d8: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c205d4) {
            ctx->pc = 0x1C205A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c205a4;
        }
    }
    ctx->pc = 0x1C205DCu;
    // 0x1c205dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c205dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c205e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c205e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c205e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c205e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c205e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c205e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c205ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C205ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C205F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C205ECu;
        // 0x1c205f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C205ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C205F4u;
    // 0x1c205f4: 0x0  nop
    ctx->pc = 0x1c205f4u;
    // NOP
    ctx->pc = 0x1c205f8u;
}
