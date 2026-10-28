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

// Function: sub_01C9B648
// Address: 0x1c9b648 - 0x1c9b758
void sub_01C9B648_0x1c9b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B648_0x1c9b648");
#endif

    switch (ctx->pc) {
        case 0x1c9b670u: goto label_1c9b670;
        case 0x1c9b6b0u: goto label_1c9b6b0;
        case 0x1c9b704u: goto label_1c9b704;
        default: break;
    }

    ctx->pc = 0x1c9b648u;

    // 0x1c9b648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9b64c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9b650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c9b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c9b658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c9b658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b65c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c9b660: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c9b660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b664: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9b664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9b668: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B668u;
    SET_GPR_U32(ctx, 31, 0x1C9B670u);
    ctx->pc = 0x1C9B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B668u;
    // 0x1c9b66c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B668u, 0x1C9B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B670u;
label_1c9b670:
    // 0x1c9b670: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c9b670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c9b674: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1c9b674u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c9b678: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c9b678u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c9b67c: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1c9b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1c9b680: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1c9b680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1c9b684: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1c9b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c9b688: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1c9b688u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c9b68c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c9b68cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c9b690: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1c9b690u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c9b694: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c9b694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c9b698: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1c9b698u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1c9b69c: 0x25af0100  addiu       $t7, $t5, 0x100
    ctx->pc = 0x1c9b69cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 256));
    // 0x1c9b6a0: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1c9b6a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1c9b6a4: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1c9b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1c9b6a8: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C9B6A8u;
    SET_GPR_U32(ctx, 31, 0x1C9B6B0u);
    ctx->pc = 0x1C9B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B6A8u;
    // 0x1c9b6ac: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C9B6A8u, 0x1C9B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B6B0u;
label_1c9b6b0:
    // 0x1c9b6b0: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1c9b6b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c9b6b4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c9b6b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c9b6b8: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1c9b6b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c9b6bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9b6bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b6c0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c9b6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c9b6c4: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1c9b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b6c8: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1c9b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1c9b6cc: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1c9b6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1c9b6d0: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1c9b6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c9b6d4: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1c9b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b6d8: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1c9b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1c9b6dc: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1c9b6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1c9b6e0: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1c9b6e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1c9b6e4: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1c9b6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c9b6e8: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1c9b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1c9b6ec: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1c9b6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b6f0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c9b6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c9b6f4: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1c9b6f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c9b6f8: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1c9b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1c9b6fc: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1c9b6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1c9b700: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1c9b700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1c9b704:
    // 0x1c9b704: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c9b704u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c9b708: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1c9b708u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1c9b70c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c9b70cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c9b710: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1c9b710u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c9b714: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c9b714u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c9b718: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1c9b718u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c9b71c: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1c9b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1c9b720: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1c9b720u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c9b724: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1c9b724u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1c9b728: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1c9b728u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1c9b72c: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1c9b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1c9b730: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1c9b730u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1c9b734: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C9B734u;
    {
        const bool branch_taken_0x1c9b734 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B734u;
        // 0x1c9b738: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b734) {
            ctx->pc = 0x1C9B704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b704;
        }
    }
    ctx->pc = 0x1C9B73Cu;
    // 0x1c9b73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c9b744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c9b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9b74c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B74Cu;
        // 0x1c9b750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B754u;
    // 0x1c9b754: 0x0  nop
    ctx->pc = 0x1c9b754u;
    // NOP
    ctx->pc = 0x1c9b758u;
}
